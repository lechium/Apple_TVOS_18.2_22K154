//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OctagonFollowUpControllerProtocol;

@interface OTFollowup : NSObject
{
    id <OctagonFollowUpControllerProtocol> _cdpd;	// 8 = 0x8
    double _previousFollowupEnd;	// 16 = 0x10
    double _followupStart;	// 24 = 0x18
    double _followupEnd;	// 32 = 0x20
    NSMutableSet *_postedCFUTypes;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000017ab5a
@property(retain) NSMutableSet *postedCFUTypes; // @synthesize postedCFUTypes=_postedCFUTypes;
@property double followupEnd; // @synthesize followupEnd=_followupEnd;
@property double followupStart; // @synthesize followupStart=_followupStart;
@property double previousFollowupEnd; // @synthesize previousFollowupEnd=_previousFollowupEnd;
@property(retain) id <OctagonFollowUpControllerProtocol> cdpd; // @synthesize cdpd=_cdpd;
- (id)sfaStatus;	// IMP=0x001000000017aab9
- (id)sysdiagnoseStatus;	// IMP=0x001000000017aab1
- (_Bool)clearFollowUp:(unsigned char)arg1 activeAccount:(id)arg2 error:(id *)arg3;	// IMP=0x001000000017a7c2
- (_Bool)postFollowUp:(unsigned char)arg1 activeAccount:(id)arg2 error:(id *)arg3;	// IMP=0x001000000017a4aa
- (id)createCDPFollowupContext:(unsigned char)arg1;	// IMP=0x001000000017a468
- (id)initWithFollowupController:(id)arg1;	// IMP=0x001000000017a3d1
- (void)clearAllPostedFlags;	// IMP=0x001000000017abea
- (_Bool)hasPosted:(unsigned char)arg1;	// IMP=0x001000000017ab82

@end

