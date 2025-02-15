//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDMediaRemoteClient, NSDate, NSSet;

@interface MRDCommandClientRestriction : NSObject
{
    MRDMediaRemoteClient *_requester;	// 8 = 0x8
    NSSet *_allowedAuditTokens;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
}

+ (id)restrictedTo:(id)arg1 by:(id)arg2;	// IMP=0x0020000000126876
- (void).cxx_destruct;	// IMP=0x0020000000126cd3
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSSet *allowedAuditTokens; // @synthesize allowedAuditTokens=_allowedAuditTokens;
@property(retain, nonatomic) MRDMediaRemoteClient *requester; // @synthesize requester=_requester;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000126b6d
- (id)description;	// IMP=0x0010000000126936

@end

