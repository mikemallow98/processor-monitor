param(
    [Parameter (Mandatory = $true)][string]$portNum
)
$port = New-Object System.IO.Ports.SerialPort COM$portNum,9600,None,8,one; 
$port.Open() 
$i = 0;

while($port.IsOpen){
    $i = Get-WmiObject win32_processor | Measure-Object LoadPercentage -Average | Select Average #gets the load percentage
    $port.WriteLine($i) #sends data to arduino
    Write-Host $i; #writes on the powershell script so you can see the exact load
    sleep 5;   
} 
$port.Close();
