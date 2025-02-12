int A = 2;
int B = 3;
int C = 4;
int D = 5;
int F = 6;

void setup() {
  pinMode(A, INPUT_PULLUP);
  pinMode(B, INPUT_PULLUP);
  pinMode(C, INPUT_PULLUP);
  pinMode(D, INPUT_PULLUP);
  pinMode(F, OUTPUT);
}

void loop() {
  int a_val = !digitalRead(A);
  int b_val = !digitalRead(B);
  int c_val = !digitalRead(C);
  int d_val = !digitalRead(D);
  int f_val = (a_val || b_val) && (c_val || d_val);
  digitalWrite(F, f_val);
}