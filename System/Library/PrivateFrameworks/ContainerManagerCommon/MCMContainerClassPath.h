//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMPOSIXUser, MCMUserIdentity, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MCMContainerClassPath : NSObject
{
    _Bool _caseSensitive;	// 8 = 0x8
    _Bool _caseSensitiveDetermined;	// 9 = 0x9
    _Bool _supportsDataProtection;	// 10 = 0xa
    _Bool _supportsDataProtectionDetermined;	// 11 = 0xb
    _Bool _classURLCreated;	// 12 = 0xc
    _Bool _symlinkClassURLCreated;	// 13 = 0xd
    NSURL *_homeDirectoryURL;	// 16 = 0x10
    _Bool _exists;	// 24 = 0x18
    unsigned short _posixMode;	// 26 = 0x1a
    NSURL *_baseURL;	// 32 = 0x20
    NSURL *_categoryURL;	// 40 = 0x28
    NSURL *_classURL;	// 48 = 0x30
    MCMPOSIXUser *_posixOwner;	// 56 = 0x38
    MCMUserIdentity *_userIdentity;	// 64 = 0x40
    unsigned long long _containerClass;	// 72 = 0x48
    NSString *_categoryComponent;	// 80 = 0x50
    NSString *_classComponent;	// 88 = 0x58
}

+ (id)_baseURLForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x00100000000d3640
+ (id)_baseURLForUserIdentity:(id)arg1;	// IMP=0x00100000000d3521
+ (id)_classComponentForContainerClass:(unsigned long long)arg1;	// IMP=0x00100000000d34d1
+ (id)_categoryComponentForContainerClass:(unsigned long long)arg1;	// IMP=0x00100000000d3486
+ (unsigned short)_modeForContainerClass:(unsigned long long)arg1;	// IMP=0x00100000000d345a
+ (_Bool)_inLibraryRepairBlock_createURLIfNecessary:(id)arg1 mode:(unsigned short)arg2 owner:(id)arg3 dataProtectionClass:(int)arg4 exists:(_Bool *)arg5 error:(id *)arg6;	// IMP=0x00100000000d3197
+ (id)posixOwnerForContainerClass:(unsigned long long)arg1 user:(id)arg2;	// IMP=0x00100000000d3078
+ (id)containerPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x00100000000d2ef6
+ (id)containerPathForContainerIdentity:(id)arg1;	// IMP=0x00100000000d2e36
+ (id)containerPathTypeClasses;	// IMP=0x00100000000d2ddb
- (void).cxx_destruct;	// IMP=0x00000000000d2a9d
@property(readonly, nonatomic) NSString *classComponent; // @synthesize classComponent=_classComponent;
@property(readonly, nonatomic) NSString *categoryComponent; // @synthesize categoryComponent=_categoryComponent;
@property(readonly, nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) unsigned short posixMode; // @synthesize posixMode=_posixMode;
@property(readonly, nonatomic) MCMPOSIXUser *posixOwner; // @synthesize posixOwner=_posixOwner;
@property(readonly, nonatomic) NSURL *classURL; // @synthesize classURL=_classURL;
@property(readonly, nonatomic) NSURL *categoryURL; // @synthesize categoryURL=_categoryURL;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (_Bool)_createURLIfNecessary:(id)arg1 mode:(unsigned short)arg2 owner:(id)arg3 dataProtectionClass:(int)arg4 error:(id *)arg5;	// IMP=0x00000000000d276d
- (_Bool)_obj1:(id)arg1 isEqualToObj2:(id)arg2;	// IMP=0x00000000000d2709
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d260f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d257c
- (_Bool)isEqualToContainerClassPath:(id)arg1;	// IMP=0x00000000000d248e
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithBaseURL:(id)arg1 categoryComponent:(id)arg2 classComponent:(id)arg3 containerClass:(unsigned long long)arg4 POSIXOwner:(id)arg5 POSIXMode:(unsigned short)arg6 userIdentity:(id)arg7;	// IMP=0x00000000000d1e9a
@property(nonatomic) _Bool exists; // @synthesize exists=_exists;
@property(readonly, nonatomic) _Bool supportsDataProtection;
@property(readonly, nonatomic, getter=isCaseSensitive) _Bool caseSensitive;
- (_Bool)createIfNecessaryWithError:(id *)arg1;	// IMP=0x00000000000d18d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

