//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>
#import <PhotoLibraryServices/PLSyncableObject-Protocol.h>

@class NSString;

@protocol PLSyncablePerson <NSObject, PLSyncableObject>
@property(nonatomic) short detectionType;
@property(readonly, nonatomic) _Bool keyFaceIsPicked;
@property(readonly, nonatomic) _Bool isTombstone;
@property(readonly, nonatomic) _Bool graphVerified;
@property(readonly, nonatomic) _Bool userVerified;
@property(retain, nonatomic) NSString *fullName;
@property(retain, nonatomic) NSString *personUUID;
- (NSString *)pl_shortDescription;
- (NSString *)syncDescription;
- (NSString *)pointerDescription;
- (void)setKeyFaceToPicked;
@end

