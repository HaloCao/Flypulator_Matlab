num=[4 25];
den=[2.5 0 0];
w=logspace(-3,3);
bode(num,den,w);
hold on;
num=[25];
den=[2.5 4 0];
w=logspace(-3,3);
bode(num,den,w);
grid on;
legend('1','2');
title('Bode Diagram')