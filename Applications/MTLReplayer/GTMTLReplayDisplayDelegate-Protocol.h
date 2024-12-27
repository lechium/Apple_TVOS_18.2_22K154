//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GTMTLTextureRenderEncoder, NSDictionary, NSString;
@protocol MTLDevice;

@protocol GTMTLReplayDisplayDelegate
- (void)setWindowTitle:(NSString *)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setContentRect:(struct CGRect)arg1 windowRect:(struct CGRect)arg2 properties:(NSDictionary *)arg3;
- (void)setDisplayTextureEncoder:(GTMTLTextureRenderEncoder *)arg1;
- (void)setDevice:(id <MTLDevice>)arg1;
@end

