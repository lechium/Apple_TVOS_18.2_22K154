//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADObjectID, NSArray, NSString;

@protocol CADObjectInterface
- (void)CADObjectIsManaged:(CADObjectID *)arg1 reply:(void (^)(int, _Bool))arg2;
- (void)CADObject:(CADObjectID *)arg1 getRelatedObjectsWithRelationName:(NSString *)arg2 reply:(void (^)(int, NSSet *))arg3;
- (void)CADObject:(CADObjectID *)arg1 getRelatedObjectWithRelationName:(NSString *)arg2 reply:(void (^)(int, CADObjectID *))arg3;
- (void)CADObject:(CADObjectID *)arg1 getSecurityScopedURLWrapperPropertyWithName:(NSString *)arg2 reply:(void (^)(int, NSSecurityScopedURLWrapper *))arg3;
- (void)CADObject:(CADObjectID *)arg1 getDataPropertyWithName:(NSString *)arg2 reply:(void (^)(int, NSData *))arg3;
- (void)CADObject:(CADObjectID *)arg1 getDatePropertyWithName:(NSString *)arg2 reply:(void (^)(int, NSDate *))arg3;
- (void)CADObject:(CADObjectID *)arg1 getNumberPropertyWithName:(NSString *)arg2 reply:(void (^)(int, NSNumber *))arg3;
- (void)CADObject:(CADObjectID *)arg1 getStringPropertyWithName:(NSString *)arg2 reply:(void (^)(int, NSString *))arg3;
- (void)CADObject:(CADObjectID *)arg1 getPropertyWithName:(NSString *)arg2 reply:(void (^)(int, NSObject<NSSecureCoding> *))arg3;
- (void)CADObjects:(NSArray *)arg1 getPropertiesWithNames:(NSArray *)arg2 reply:(void (^)(int, NSArray *))arg3;
- (void)CADObject:(CADObjectID *)arg1 getPropertiesWithNames:(NSArray *)arg2 reply:(void (^)(int, NSArray *))arg3;
- (void)CADObjectsExist:(NSArray *)arg1 reply:(void (^)(int, NSArray *))arg2;
- (void)CADObjectExists:(CADObjectID *)arg1 reply:(void (^)(int, _Bool))arg2;
@end

