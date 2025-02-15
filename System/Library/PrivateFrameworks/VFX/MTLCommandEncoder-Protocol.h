//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/NSObject-Protocol.h>

@class NSString;
@protocol MTLDevice;

@protocol MTLCommandEncoder <NSObject>
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (void)popDebugGroup;
- (void)pushDebugGroup:(NSString *)arg1;
- (void)insertDebugSignpost:(NSString *)arg1;
- (void)endEncoding;
@end

