Vim�UnDo� ��(\=bC�D:���;r-�O�s9^�� 5   V   4            return r0 + (1-r0) * pow(1 -cosine), 5);   R   $      S       S   S   S    `��    _�                             ����                                                                                                                                                                                                                                                                                                                                                             `���     �                   5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `���     �         
          �         	    �                5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `���     �                 5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `���     �                }5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `���     �               struct hit_record{5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `���     �      
         struct hit_record5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `���     �               class material{5�_�      
                     ����                                                                                                                                                                                                                                                                                                                                                             `��/    �   
            }5�_�         	       
          ����                                                                                                                                                                                                                                                                                                                                                             `���     �                   �             �   
            };5�_�   
                         ����                                                                                                                                                                                                                                                                                                                                                             `���     �               public5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                             `���     �                           �             �               
    public5�_�                       	    ����                                                                                                                                                                                                                                                                                                                                                             `��      �               	        }5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �             �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �                        5�_�                       p    ����                                                                                                                                                                                                                                                                                                                                                             `��"     �                           �             �               p        virtual bool scatter(const ray& r, const hit_record& rec, color& attenuation, ray& scattered) const = 0;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `���     �                       �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `���    �               }5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `���    �                                �             �                           �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `���    �                #include "utility.h"5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       `���     �   "   $   '                  �   "   $   &    �       $   $          �       "   #    �      "   !       5�_�                    $   	    ����                                                                                                                                                                                                                                                                                                                                                       `���     �   %   '   *                      �   %   '   )    �   #   '   '      	        }5�_�                     '       ����                                                                                                                                                                                                                                                                                                                                                       `��     �   '   ,   ,                  �   '   )   +    �   &   )   *                      )5�_�      !               ,       ����                                                                                                                                                                                                                                                                                                                                                       `��[   
 �   ,   /   0              �   ,   .   /    5�_�       "           !          ����                                                                                                                                                                                                                                                                                                                                                       `��z    �         1                  albedo(a);5�_�   !   #           "   /       ����                                                                                                                                                                                                                                                                                                                                                       `�Ȉ    �   .   0   1      }5�_�   "   $           #      #    ����                                                                                                                                                                                                                                                                                                                                                       `���     �         1      8            scattered = ray(rec.p, scattered_direction);5�_�   #   %           $      #    ����                                                                                                                                                                                                                                                                                                                                                       `���    �         1      %            scattered = ray(rec.p, );5�_�   $   &           %   "       ����                                                                                                                                                                                                                                                                                                                                                             `��x     �   !   #   1              metal(const color& a){5�_�   %   '           &   #       ����                                                                                                                                                                                                                                                                                                                                                             `�с     �   "   %   1                  albedo = a;5�_�   &   (           '   *   ,    ����                                                                                                                                                                                                                                                                                                                                                             `�њ     �   )   +   2      .            scattered = ray(rec.p, reflected);5�_�   '   )           (   /       ����                                                                                                                                                                                                                                                                                                                                                             `�Ѭ    �   /   1   3              �   /   1   2    5�_�   (   *           )   1       ����                                                                                                                                                                                                                                                                                                                                                             `���     �   5   7   :                  �   5   7   9    �   3   7   7          �   3   5   6    �   1   5   4       �   1   3   3    5�_�   )   +           *   7       ����                                                                                                                                                                                                                                                                                                                                                             `���     �   6   8   :      	        }5�_�   *   ,           +   7       ����                                                                                                                                                                                                                                                                                                                                                             `��     �   7   9   ;              �   7   9   :    5�_�   +   /           ,   8       ����                                                                                                                                                                                                                                                                                                                                                             `��     �   7   8                  virtual booll 5�_�   ,   0   -       /   6        ����                                                                                                                                                                                                                                                                                                                            &           (           V        `��     �   6   :   :    �   6   7   :    5�_�   /   1           0   9   !    ����                                                                                                                                                                                                                                                                                                                            &           (           V        `��R     �   8   <   =      !                ) const override{5�_�   0   2           1   <   	    ����                                                                                                                                                                                                                                                                                                                            &           (           V        `��T     �   ;   >   ?      	        }5�_�   1   3           2   >       ����                                                                                                                                                                                                                                                                                                                            &           (           V        `��Y     �   =   @   @      }5�_�   2   4           3   >        ����                                                                                                                                                                                                                                                                                                                            &           (           V        `��a     �   =   ?          }5�_�   3   5           4   ;       ����                                                                                                                                                                                                                                                                                                                            &           (           V        `��f     �   :   <                      5�_�   4   6           5   7        ����                                                                                                                                                                                                                                                                                                                            &           (           V        `��i     �   6   8                  virtual bool scatter(5�_�   5   7           6   8       ����                                                                                                                                                                                                                                                                                                                            &           (           V        `��l     �   7   9          W                const ray& r, const hit_record& rec, color& attenuation, ray& scattered5�_�   6   8           7   9       ����                                                                                                                                                                                                                                                                                                                            &           (           V        `��m     �   8   :          !                ) const override{5�_�   7   9           8   <       ����                                                                                                                                                                                                                                                                                                                            &           (           V        `��p     �   ;   =          	        }5�_�   8   :           9   9   %    ����                                                                                                                                                                                                                                                                                                                            &           (           V        `��r     �   8   B   A      %                    ) const override{5�_�   9   ;           :   A        ����                                                                                                                                                                                                                                                                                                                            &           (           V        `��     �   @   A           5�_�   :   <           ;   A        ����                                                                                                                                                                                                                                                                                                                            &           (           V        `��     �   @   A           5�_�   ;   =           <   A        ����                                                                                                                                                                                                                                                                                                                            &           (           V        `��     �   @   A           5�_�   <   >           =   B       ����                                                                                                                                                                                                                                                                                                                            &           (           V        `��!     �   A   B                  5�_�   =   @           >   B       ����                                                                                                                                                                                                                                                                                                                            &           (           V        `��#    �   B   E   F              �   B   D   E    5�_�   >   C   ?       @   6   %    ����                                                                                                                                                                                                                                                                                                                                                             `���    �   5   8   G      %            ir = index_of_refraction;5�_�   @   D   B       C   ?        ����                                                                                                                                                                                                                                                                                                                            8          G           V        `��!     �   >   ?           5�_�   C   E           D   8        ����                                                                                                                                                                                                                                                                                                                            A          8           V        `��+    �   7   B   G   
   !            virtual bool scatter(   [                    const ray& r, const hit_record& rec, color& attenuation, ray& scattered   %                    ) const override{   3                attenuation = color(1.0, 1.0, 1.0);   K                double refraction_ratio = rec.front_face ? (1.0 / ir) : ir;   @                vec unit_direction = unit_vector(r.direction());   V                vec refracted = refract(unit_direction, rec.normal, refraction_ratio);   2                scattered = ray(rec.p, refracted);                   return true;               }5�_�   D   F           E   B       ����                                                                                                                                                                                                                                                                                                                            A          8           V        `��C    �   A   B          	        }5�_�   E   G           F   =   <    ����                                                                                                                                                                                                                                                                                                                            A          8           V        `�߯     �   <   @   F      <            vec unit_direction = unit_vector(r.direction());5�_�   F   H           G   ?        ����                                                                                                                                                                                                                                                                                                                            C          8           V        `���     �   >   @   H      5            double sin_t = sqrt91.0 - cos_t * cos_t);5�_�   G   I           H   ?   !    ����                                                                                                                                                                                                                                                                                                                            C          8           V        `���     �   >   @   H      6            double sin_t = sqrt()1.0 - cos_t * cos_t);5�_�   H   J           I   ?       ����                                                                                                                                                                                                                                                                                                                            C          8           V        `��     �   A   C   L                      �   A   C   K    �   @   C   K      %            if (cannot_refract) > 1.0               }�   @   B   L      &            if (cannot_refract) > 1.0{    �   A   C   L                      �   A   C   K    �   ?   C   I                  �   ?   A   H    5�_�   I   K           J   C       ����                                                                                                                                                                                                                                                                                                                            G          8           V        `��l     �   D   F   O                      �   D   F   N    �   C   F   M                  �   C   E   L    5�_�   J   L           K   F       ����                                                                                                                                                                                                                                                                                                                            J          8           V        `���     �   F   H   P                  �   F   H   O    5�_�   K   M           L   H       ����                                                                                                                                                                                                                                                                                                                            K          8           V        `��     �   G   H          R            vec refracted = refract(unit_direction, rec.normal, refraction_ratio);5�_�   L   N           M   H       ����                                                                                                                                                                                                                                                                                                                            J          8           V        `��    �   G   H          .            scattered = ray(rec.p, refracted);5�_�   M   O           N   @   A    ����                                                                                                                                                                                                                                                                                                                            I          8           V        `���    �   ?   B   N      A            bool cannot_refract = refraction_ratio * sin_t > 1.0;5�_�   N   P           O   B       ����                                                                                                                                                                                                                                                                                                                                                             `��l     �   A   C   O                   if (cannot_refract){5�_�   O   Q           P   B       ����                                                                                                                                                                                                                                                                                                                                                             `��s     �   A   C   O                   if (cannot_refract){5�_�   P   R           Q   L       ����                                                                                                                                                                                                                                                                                                                                                             `���     �   O   S   T                  �   O   Q   S    �   K   Q   O              double ir;5�_�   Q   S           R   R   $    ����                                                                                                                                                                                                                                                                                                                                                             `��     �   Q   S   V      4            return r0 + (1-r0) * pow(1 -cosine), 5);5�_�   R               S   R   &    ����                                                                                                                                                                                                                                                                                                                                                             `��    �   Q   S   V      6            return r0 + (1-r0) * pow()(1 -cosine), 5);5�_�   @       A   C   B   8        ����                                                                                                                                                                                                                                                                                                                            8           8   $       V        `��     �   7   H        �   8   9        �   7   8   8      %            ir = index_of_refraction;5�_�   @           B   A   8        ����                                                                                                                                                                                                                                                                                                                            8           8   $       V        `��     �   7   H        �   8   9        �   7   8   8      %            ir = index_of_refraction;5�_�   >           @   ?   6       ����                                                                                                                                                                                                                                                                                                                                                             `���     �   5   7   G                  5�_�   ,   .       /   -   &        ����                                                                                                                                                                                                                                                                                                                                                             `��     �   %   (   :      e        virtual bool scatter( const ray& r, const hit_record& rec, color& attenuation, ray& scattered5�_�   -               .   &       ����                                                                                                                                                                                                                                                                                                                                                             `��     �   %   (   9      v        virtual bool scatter( const ray& r, const hit_record& rec, color& attenuation, ray& scattered) const override{5�_�                      F    ����                                                                                                                                                                                                                                                                                                                                                             `�     �         !                  �         "      L            vec reflected = reflect(unit_vector(r.direction()), rec.normal);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       `���     �         "      I            //auto scatter_direction = rec.normal + random_unit_vector();�         "      1            //if (scatter_direction.near_zero()){   1            //    scatter_direction = rec.normal;               //}5�_�                       #    ����                                                                                                                                                                                                                                                                                                                                                       `���     �         "      %            scattered = ray(rec.p, );5�_�                       #    ����                                                                                                                                                                                                                                                                                                                                                       `���     �         "      .            scattered = ray(rec.p, reflected);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       `��     �         "                  return ;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��    �         "      @            return (dot(scattered.direction(), rec.normal) > 0);5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��W   	 �         "                  albedo = a;5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `���     �                           uA5�_�              
   	           ����                                                                                                                                                                                                                                                                                                                                                             `���     �   
            	        u5��