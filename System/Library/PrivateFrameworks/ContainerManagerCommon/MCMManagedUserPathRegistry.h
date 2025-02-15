//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMManagedPath, MCMUserIdentity;

__attribute__((visibility("hidden")))
@interface MCMManagedUserPathRegistry
{
    MCMUserIdentity *_userIdentity;	// 120 = 0x78
    MCMManagedPath *_userHome;	// 128 = 0x80
    MCMManagedPath *_userLibrary;	// 136 = 0x88
    MCMManagedPath *_userCaches;	// 144 = 0x90
    MCMManagedPath *_containermanagerUserCaches;	// 152 = 0x98
    MCMManagedPath *_containermanagerUserDeathrow;	// 160 = 0xa0
    MCMManagedPath *_containermanagerUserLibrary;	// 168 = 0xa8
    MCMManagedPath *_containermanagerUserPendingUpdates;	// 176 = 0xb0
    MCMManagedPath *_containermanagerUserReplaceOperations;	// 184 = 0xb8
    MCMManagedPath *_containermanagerUserDeleteOperations;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000000003e5d0
@property(readonly, nonatomic) MCMManagedPath *containermanagerUserDeleteOperations; // @synthesize containermanagerUserDeleteOperations=_containermanagerUserDeleteOperations;
@property(readonly, nonatomic) MCMManagedPath *containermanagerUserReplaceOperations; // @synthesize containermanagerUserReplaceOperations=_containermanagerUserReplaceOperations;
@property(readonly, nonatomic) MCMManagedPath *containermanagerUserPendingUpdates; // @synthesize containermanagerUserPendingUpdates=_containermanagerUserPendingUpdates;
@property(readonly, nonatomic) MCMManagedPath *containermanagerUserLibrary; // @synthesize containermanagerUserLibrary=_containermanagerUserLibrary;
@property(readonly, nonatomic) MCMManagedPath *containermanagerUserDeathrow; // @synthesize containermanagerUserDeathrow=_containermanagerUserDeathrow;
@property(readonly, nonatomic) MCMManagedPath *containermanagerUserCaches; // @synthesize containermanagerUserCaches=_containermanagerUserCaches;
@property(readonly, nonatomic) MCMManagedPath *userCaches; // @synthesize userCaches=_userCaches;
@property(readonly, nonatomic) MCMManagedPath *userLibrary; // @synthesize userLibrary=_userLibrary;
@property(readonly, nonatomic) MCMManagedPath *userHome; // @synthesize userHome=_userHome;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
- (void)_initPathPropertiesWithUserIdentity:(id)arg1;	// IMP=0x000000000003df66
- (id)initWithUserIdentity:(id)arg1 daemonUser:(id)arg2;	// IMP=0x000000000003dd93

@end

