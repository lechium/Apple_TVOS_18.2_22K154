//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSManagedObject, NSManagedObjectContext, NSManagedObjectID, NSMutableDictionary, NSSet, NSUUID;

@protocol HMDCoreDataCloudTransformable <NSObject>
+ (NSManagedObject *)createWithLocalModel:(NSManagedObject *)arg1 context:(NSManagedObjectContext *)arg2;
+ (NSManagedObject *)fetchWithLocalModel:(NSManagedObject *)arg1 context:(NSManagedObjectContext *)arg2;
+ (_Bool)exportDeleteWithObjectID:(NSManagedObjectID *)arg1 modelID:(NSUUID *)arg2 additionalUpdates:(NSMutableDictionary *)arg3 context:(NSManagedObjectContext *)arg4;
+ (_Bool)exportUpdateWithObjectID:(NSManagedObjectID *)arg1 updatedProperties:(NSSet *)arg2 additionalUpdates:(NSMutableDictionary *)arg3 context:(NSManagedObjectContext *)arg4;
+ (_Bool)exportInsertWithObjectID:(NSManagedObjectID *)arg1 additionalUpdates:(NSMutableDictionary *)arg2 context:(NSManagedObjectContext *)arg3;
+ (_Bool)importDeleteWithObjectID:(NSManagedObjectID *)arg1 modelID:(NSUUID *)arg2 additionalUpdates:(NSMutableDictionary *)arg3 context:(NSManagedObjectContext *)arg4;
+ (_Bool)importUpdateWithObjectID:(NSManagedObjectID *)arg1 updatedProperties:(NSSet *)arg2 additionalUpdates:(NSMutableDictionary *)arg3 context:(NSManagedObjectContext *)arg4;
+ (_Bool)importInsertWithObjectID:(NSManagedObjectID *)arg1 additionalUpdates:(NSMutableDictionary *)arg2 context:(NSManagedObjectContext *)arg3;
- (NSManagedObject *)createLocalModelWithContext:(NSManagedObjectContext *)arg1;
- (NSManagedObject *)fetchLocalModelWithContext:(NSManagedObjectContext *)arg1;
@end

