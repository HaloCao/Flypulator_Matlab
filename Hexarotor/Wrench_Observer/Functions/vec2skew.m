function M = vec2skew(v)
% get skew symmetric matrix from vector v
M = [0, -v(3), v(2);
    v(3), 0, -v(1);
    -v(2), v(1), 0];