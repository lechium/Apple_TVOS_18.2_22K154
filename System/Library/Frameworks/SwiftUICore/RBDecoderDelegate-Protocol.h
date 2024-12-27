//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUICore/NSObject-Protocol.h>

@class NSData, RBShaderLibrary;

@protocol RBDecoderDelegate <NSObject>

@optional
- (RBShaderLibrary *)decodedShaderLibraryWithData:(NSData *)arg1 error:(id *)arg2;
- (struct CGFont *)decodedCGFontWithData:(NSData *)arg1 error:(id *)arg2;
- (void *)decodedImageContentsWithData:(NSData *)arg1 type:(int *)arg2 error:(id *)arg3;
- (void)decodedMetadata:(NSData *)arg1;
@end

