Vim�UnDo� 4�q]e��Kq˦�lt�Ͻ�(�WG0 �'~}   �   "            glGenBuffers(1, &EBO);   l          ,       ,   ,   ,    `�@6    _�                     <       ����                                                                                                                                                                                                                                                                                                                            <          <   -       v   -    `�V     �   ;   =   �      0        printf("Error creating shader program");5�_�                    I   	    ����                                                                                                                                                                                                                                                                                                                            <          <   -       v   -    `�     �   H   J   �      6        printf("Error linking program: '%s'\n", eLog);5�_�                   I       ����                                                                                                                                                                                                                                                                                                                            I          I          v       `�<     �   H   J   �      6        printf("Error linking program: '%s'\n", eLog);5�_�                    I   &    ����                                                                                                                                                                                                                                                                                                                            I          I          v       `�@     �   H   J   �      6        printf("Error linking program: '%s'\n", eLog);5�_�                   I       ����                                                                                                                                                                                                                                                                                                                            I          I          v       `�e     �   H   J   �      1        printf("Error linking program:\n", eLog);5�_�      
              I       ����                                                                                                                                                                                                                                                                                                                            I          I          v       `�i     �   H   J   �      2        printf(""Error linking program:\n", eLog);5�_�         	       
   I   (    ����                                                                                                                                                                                                                                                                                                                            I          I          v       `��     �   H   J   �      1        printf("Error linking program:\n", eLog);5�_�   
                I   '    ����                                                                                                                                                                                                                                                                                                                            I          I          v       `��     �   H   J   �      1        printf("Error linking program:\n", eLog);5�_�                   P   8    ����                                                                                                                                                                                                                                                                                                                            I          I          v       `�     �   O   Q   �      9        printf("Error validating program: '%s'\n", eLog);5�_�                    M   -    ����                                                                                                                                                                                                                                                                                                                            I          I          v       `�x     �   L   N   �      8    glGetProgramiv(shader, GL_VALIDATE_STATUS, &result);5�_�                    M   -    ����                                                                                                                                                                                                                                                                                                                            I          I          v       `�     �   L   N   �      8    glGetProgramiv(shader, GL_VALIDATE_STATUS, &result);5�_�      #             R        ����                                                                                                                                                                                                                                                                                                                            L           R           V        `��    �   R   T   �    5�_�      $   !       #   W       ����                                                                                                                                                                                                                                                                                                                            T           �           V        `�?o     �   V   W          .           0.5f, -0.5f, 0.0f,  // bottom right5�_�   #   %           $   X   
    ����                                                                                                                                                                                                                                                                                                                            T           �           V        `�?x     �   X   ]   �                    �   X   Z   �    5�_�   $   &           %   Z   
    ����                                                                                                                                                                                                                                                                                                                            T           �           V        `�?�     �   Z   \   �      
          �   Z   \   �    5�_�   %   '           &   [   
    ����                                                                                                                                                                                                                                                                                                                            T           �           V        `�@     �   Z   \   �                0.5f, -0.5f, 0.0f, 5�_�   &   (           '   [   
    ����                                                                                                                                                                                                                                                                                                                            T           �           V        `�@     �   Z   \   �                .5f, -0.5f, 0.0f, 5�_�   '   )           (   [   
    ����                                                                                                                                                                                                                                                                                                                            T           �           V        `�@     �   Z   \   �                5f, -0.5f, 0.0f, 5�_�   (   +           )   [   
    ����                                                                                                                                                                                                                                                                                                                            T           �           V        `�@    �   Z   \   �                f, -0.5f, 0.0f, 5�_�   )   ,   *       +   `        ����                                                                                                                                                                                                                                                                                                                            `           c                   `�@&     �   `   d   �              0, 1, 3,           1, 2, 3       };�   _   a   �          GLint indices[] = {5�_�   +               ,   l        ����                                                                                                                                                                                                                                                                                                                            l           o                   `�@5    �   l   p   �      7            glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);   \            glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);    �   k   m   �      "            glGenBuffers(1, &EBO);5�_�   )           +   *   `        ����                                                                                                                                                                                                                                                                                                                            `          c           V        `�@     �   _   a   �      //    GLint indices[] = {5�_�      "       #   !   T        ����                                                                                                                                                                                                                                                                                                                            T           Y           V        `��     �   S   U        5�_�   !               "   T       ����                                                                                                                                                                                                                                                                                                                            T           Z           V        `��     �   T   U   �    �   T   U   �      void CreateRectangle(){5�_�             !       V        ����                                                                                                                                                                                                                                                                                                                            T           a           V        `��     �   V   W   �    �   V   W   �      void CreateRectangle(){       GLfloat vertices[] = {   +           0.5f,  0.5f, 0.0f,  // top right   .           0.5f, -0.5f, 0.0f,  // bottom right   -          -0.5f, -0.5f, 0.0f,  // bottom left   *          -0.5f,  0.5f, 0.0f   // top left         };5�_�                     V        ����                                                                                                                                                                                                                                                                                                                            T           a           V        `��     �   V   W   �    �   V   W   �      void CreateRectangle(){       GLfloat vertices[] = {   +           0.5f,  0.5f, 0.0f,  // top right   .           0.5f, -0.5f, 0.0f,  // bottom right   -          -0.5f, -0.5f, 0.0f,  // bottom left   *          -0.5f,  0.5f, 0.0f   // top left         };5�_�                   M       ����                                                                                                                                                                                                                                                                                                                            I          I          v       `��     �   L   N   �      2    glGetProgramiv(, GL_VALIDATE_STATUS, &result);5�_�                   M       ����                                                                                                                                                                                                                                                                                                                            I          I          v       `��     �   L   N   �          glGetProgramiv();5�_�                   M       ����                                                                                                                                                                                                                                                                                                                            I          I          v       `��     �   L   N   �      %    glGetProgramiv(shader,, &result);5�_�                   M       ����                                                                                                                                                                                                                                                                                                                            I          I          v       `��     �   L   N   �      %    glGetProgramiv(shader,, &result);5�_�                   M       ����                                                                                                                                                                                                                                                                                                                            I          I          v       `��     �   L   N   �      7    glGetProgramiv(shader,GL_VALIDATE_STATUS, &result);5�_�                    M       ����                                                                                                                                                                                                                                                                                                                            I          I          v       `��     �   L   N   �      %    glGetProgramiv(shader,, &result);5�_�                   P       ����                                                                                                                                                                                                                                                                                                                            I          I          v       `�     �   O   Q   �      $        printf("Err: '%s'\n", eLog);5�_�                   O       ����                                                                                                                                                                                                                                                                                                                            I          I          v       `�     �   N   P   �      5        glGetPrograshader, sizeof(eLog), NULL, eLog);5�_�                   O       ����                                                                                                                                                                                                                                                                                                                            I          I          v       `��     �   N   P   �      =        glGetPrograInfoLog(shader, sizeof(eLog), NULL, eLog);5�_�                   O       ����                                                                                                                                                                                                                                                                                                                            I          I          v       `��     �   N   P   �      =        glGetPrograInfoLog(shader, sizeof(eLog), NULL, eLog);5�_�                   M       ����                                                                                                                                                                                                                                                                                                                            I          I          v       `��     �   L   N   �      $    glGetProgramiv(STATUS, &result);5�_�                   O   4    ����                                                                                                                                                                                                                                                                                                                            I          I          v       `�1     �   N   P   �      =        glGetProgramInfoLog(shader, sizeof(eLog), NUL, eLog);5�_�                   O   4    ����                                                                                                                                                                                                                                                                                                                            I          I          v       `�&     �   O   P   �       5�_�                    O   4    ����                                                                                                                                                                                                                                                                                                                            I          I          v       `�     �   O   P   �       5�_�   
                 I   '    ����                                                                                                                                                                                                                                                                                                                            I          I          v       `��     �   I   J   �       5�_�              
   	   I       ����                                                                                                                                                                                                                                                                                                                            I          I          v       `�l     �   H   J   �              printf(, eLog);5�_�                    I       ����                                                                                                                                                                                                                                                                                                                            I          I          v       `�C     �   H   J   �              printf(, eLog);5�_�                    I       ����                                                                                                                                                                                                                                                                                                                            I          I   -       v   -    `�,     �   H   J   �              printf(, eLog);5��