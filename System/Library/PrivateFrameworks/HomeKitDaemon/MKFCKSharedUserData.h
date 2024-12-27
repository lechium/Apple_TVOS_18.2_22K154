//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, NSUUID;
@protocol HMDHomeMember;

__attribute__((visibility("hidden")))
@interface MKFCKSharedUserData
{
    id <HMDHomeMember> _workingStoreHomeMember;	// 8 = 0x8
}

+ (id)rootKeyPath;	// IMP=0x006000000054010c
+ (id)fetchRequest;	// IMP=0x0060000000efd424
- (void).cxx_destruct;	// IMP=0x0000000000540658
- (id)workingStoreHomeMember;	// IMP=0x0000000000540119

// Remaining properties
@property(copy, nonatomic) NSUUID *flags; // @dynamic flags;
@property(copy, nonatomic) NSUUID *homeModelID; // @dynamic homeModelID;
@property(copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;
@property(copy, nonatomic) NSString *writerVersion; // @dynamic writerVersion;

@end

