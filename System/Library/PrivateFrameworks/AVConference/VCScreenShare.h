//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VCScreenShare : NSObject
{
    _Bool _isWindowed;	// 8 = 0x8
    _Bool _isCursorCaptured;	// 9 = 0x9
    _Bool _privateContentCaptureAllowed;	// 10 = 0xa
    _Bool _contentRepickingAllowed;	// 11 = 0xb
    unsigned int _height;	// 12 = 0xc
    unsigned int _width;	// 16 = 0x10
    unsigned int _frameRate;	// 20 = 0x14
    unsigned int _screenCaptureDisplayID;	// 24 = 0x18
    int _displayMode;	// 28 = 0x1c
    unsigned int _selectiveSharingPort;	// 32 = 0x20
    NSNumber *_clientPID;	// 40 = 0x28
    NSString *_clientBundleID;	// 48 = 0x30
    NSData *_clientAuditTokenData;	// 56 = 0x38
    NSString *_screenVirtualDisplayLabel;	// 64 = 0x40
    NSArray *_excludedApplicationBundleIDs;	// 72 = 0x48
    NSString *_selectiveScreenUUID;	// 80 = 0x50
    long long _captureSourceID;	// 88 = 0x58
}

@property(readonly, nonatomic) long long captureSourceID; // @synthesize captureSourceID=_captureSourceID;
@property(retain, nonatomic) NSString *selectiveScreenUUID; // @synthesize selectiveScreenUUID=_selectiveScreenUUID;
@property(readonly, nonatomic) unsigned int selectiveSharingPort; // @synthesize selectiveSharingPort=_selectiveSharingPort;
@property(retain, nonatomic) NSArray *excludedApplicationBundleIDs; // @synthesize excludedApplicationBundleIDs=_excludedApplicationBundleIDs;
@property(nonatomic) _Bool contentRepickingAllowed; // @synthesize contentRepickingAllowed=_contentRepickingAllowed;
@property(readonly, nonatomic) NSString *screenVirtualDisplayLabel; // @synthesize screenVirtualDisplayLabel=_screenVirtualDisplayLabel;
@property(readonly, nonatomic) _Bool privateContentCaptureAllowed; // @synthesize privateContentCaptureAllowed=_privateContentCaptureAllowed;
@property(readonly, nonatomic) NSData *clientAuditTokenData; // @synthesize clientAuditTokenData=_clientAuditTokenData;
@property(retain, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(nonatomic) _Bool isCursorCaptured; // @synthesize isCursorCaptured=_isCursorCaptured;
@property(readonly, nonatomic) _Bool isWindowed; // @synthesize isWindowed=_isWindowed;
@property(retain, nonatomic) NSNumber *clientPID; // @synthesize clientPID=_clientPID;
@property(readonly, nonatomic) int displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) unsigned int screenCaptureDisplayID; // @synthesize screenCaptureDisplayID=_screenCaptureDisplayID;
@property(readonly, nonatomic) unsigned int frameRate; // @synthesize frameRate=_frameRate;
@property(readonly, nonatomic) unsigned int width; // @synthesize width=_width;
@property(readonly, nonatomic) unsigned int height; // @synthesize height=_height;
- (void)setPrivateContentCaptureAllowedForConfig:(id)arg1;	// IMP=0x0000000000484f07
- (void)setScreenVirtualDisplayLabelforConfig:(id)arg1;	// IMP=0x0000000000484c55
- (void)setConfig:(id)arg1 pid:(id)arg2 captureSourceID:(id)arg3;	// IMP=0x0000000000484a06
- (void)updateScreenCaptureWithConfig:(id)arg1;	// IMP=0x00000000004849ac
- (void)dealloc;	// IMP=0x000000000048477c
- (id)initWithConfig:(id)arg1 pid:(id)arg2 captureSourceID:(id)arg3;	// IMP=0x0000000000484541

@end

