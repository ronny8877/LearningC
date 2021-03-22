echo ================================= Installing Gcc in Windows  ================================= 
echo ================================= Roni3  ================================= 
powershell -Command "& Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))"
echo ================================= Executing Commands =========================================
choco install gcc-arm -y
echo Thank you for using a useless Script 
timeout /t 10



