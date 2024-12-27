//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSRequestReasonContainer : NSObject
{
    unsigned long long _reason;	// 8 = 0x8
    unsigned long long _subreason;	// 16 = 0x10
    unsigned long long _pathID;	// 24 = 0x18
}

+ (id)retryRequestWithSubreason:(unsigned long long)arg1 pathID:(unsigned long long)arg2;	// IMP=0x00400000001695f4
+ (id)repairRequestWithSubreason:(unsigned long long)arg1 pathID:(unsigned long long)arg2;	// IMP=0x00100000001695bb
+ (id)pushRequestWithSubreason:(unsigned long long)arg1 pathID:(unsigned long long)arg2;	// IMP=0x0010000000169582
+ (id)userRequestWithSubreason:(unsigned long long)arg1 pathID:(unsigned long long)arg2;	// IMP=0x0010000000169549
+ (id)initialRequestWithSubreason:(unsigned long long)arg1 pathID:(unsigned long long)arg2;	// IMP=0x0010000000169510
+ (id)scheduledRequestWithSubreason:(unsigned long long)arg1 pathID:(unsigned long long)arg2;	// IMP=0x00100000001694d7
+ (id)unknownReasonContainer;	// IMP=0x00100000001694a8
@property(nonatomic) unsigned long long pathID; // @synthesize pathID=_pathID;
@property(nonatomic) unsigned long long subreason; // @synthesize subreason=_subreason;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (id)requestReasonString;	// IMP=0x001000000016962d
- (id)initWithReason:(unsigned long long)arg1 subreason:(unsigned long long)arg2 pathID:(unsigned long long)arg3;	// IMP=0x0010000000169455

@end

