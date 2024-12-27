//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface TVSSOutputDeviceAsset : NSObject
{
    NSString *_symbolName;	// 8 = 0x8
}

+ (void)_setOutputDeviceRouteProvider:(CDUnknownBlockType)arg1;	// IMP=0x002000000001c810
+ (CDUnknownBlockType)_outputDeviceRouteProvider;	// IMP=0x001000000001c6d0
- (void).cxx_destruct;	// IMP=0x002000000001cd70
@property(readonly, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001cab0
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000001ca20
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000001c980
- (id)succinctDescriptionBuilder;	// IMP=0x001000000001c8f0
- (id)succinctDescription;	// IMP=0x001000000001c880
@property(readonly, nonatomic) UIImage *image;
- (id)initWithOutputDeviceRoute:(id)arg1;	// IMP=0x001000000001c260

// Remaining properties
@property(readonly) Class superclass;

@end

