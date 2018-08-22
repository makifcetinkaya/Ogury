#import <Foundation/Foundation.h>

typedef enum {
    AdinCubeUserInfoGenderUnknown = -1,
    AdinCubeUserInfoGenderMale = 0,
    AdinCubeUserInfoGenderFemale = 1
} AdinCubeUserInfoGender;

typedef enum {
    AdinCubeUserInfoMaritalStatusUnknown = -1,
    AdinCubeUserInfoMaritalStatusSingle = 0,
    AdinCubeUserInfoMaritalStatusMarried = 1
} AdinCubeUserInfoMaritalStatus;

@interface AdinCubeUserInfo : NSObject

- (void)setGender:(AdinCubeUserInfoGender)gender;

- (void)setMaritalStatus:(AdinCubeUserInfoMaritalStatus)maritalStatus;

- (void)setAge:(NSUInteger)age;

- (void)setBirthDate:(NSDate*)birthDate;

- (void)setLatitude:(double)latitude andLongitude:(double)longitude;

@end
