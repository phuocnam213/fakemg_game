$TargetFile = "$PWD\game.exe"
$ShortcutFile = "$env:USERPROFILE\Desktop\The Doge Game.lnk"

$WScriptShell = New-Object -ComObject WScript.Shell
$Shortcut = $WScriptShell.CreateShortcut($ShortcutFile)
$Shortcut.TargetPath = $TargetFile
$Shortcut.WorkingDirectory = "$PWD"
$Shortcut.Save()
