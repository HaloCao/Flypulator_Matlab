num=[4 25];
den=[2.5 0 0];
w=logspace(-3,3);
bode(num,den,w);
hold on;
num=[4 50];
den=[2.5 0 0];
w=logspace(-3,3);
bode(num,den,w);
num=[4 100];
den=[2.5 0 0];
w=logspace(-3,3);
bode(num,den,w);
grid on;
legend('Kp=25','Kp=50','Kp=100');
title('Bode Diagram')