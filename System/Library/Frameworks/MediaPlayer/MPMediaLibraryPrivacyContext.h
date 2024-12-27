//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPGreenTeaLoggerWrapper;

__attribute__((visibility("hidden")))
@interface MPMediaLibraryPrivacyContext : NSObject
{
    MPGreenTeaLoggerWrapper *_gtLogger;	// 8 = 0x8
}

+ (void)setDefaultClientWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00600000001ec41a
+ (id)contextForDefaultClient;	// IMP=0x00600000001ec3ef
+ (id)sharedContextForCurrentProcess;	// IMP=0x00600000001ec3bf
+ (void)initialize;	// IMP=0x00600000001ec3b9
- (void).cxx_destruct;	// IMP=0x00000000001ec3a9
- (void)endAccessInterval;	// IMP=0x00000000001ec3a3
- (void)beginAccessInterval;	// IMP=0x00000000001ec39d
- (void)logPrivacyAccess;	// IMP=0x00000000001ec397
- (id)initWithPAApplication:(id)arg1;	// IMP=0x00000000001ec368
- (id)initWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00000000001ec354
- (id)initWithClientIdentity:(id)arg1;	// IMP=0x00000000001ec340
- (id)init;	// IMP=0x00000000001ec32c

@end

