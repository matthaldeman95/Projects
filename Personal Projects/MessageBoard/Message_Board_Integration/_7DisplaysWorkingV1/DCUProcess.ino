String getDCULast(){
  String DCULast = "";
  Serial.println("DCULast process initializing...");
  Process p;
  p.runShellCommand("/mnt/sda1/getDCULast.py");
  while (p.available()){
    DCULast = p.readString();
    p.exitValue();
  }
  p.close();
  Serial.println("DCULast process complete");
  Serial.println(DCULast);
  return DCULast;

}
