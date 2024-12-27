//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPImage, NSString;

__attribute__((visibility("hidden")))
@interface LPFetcherImageResponse
{
    LPImage *_image;	// 24 = 0x18
}

+ (id)responseForFetcher:(id)arg1 withData:(id)arg2 MIMEType:(id)arg3;	// IMP=0x00100000000a323f
+ (id)responseForFetcher:(id)arg1 withImage:(id)arg2;	// IMP=0x00100000000a3110
+ (id)imagePropertiesForFetcher:(id)arg1;	// IMP=0x00100000000a30f7
+ (_Bool)isValidMIMEType:(id)arg1;	// IMP=0x00100000000a30de
- (void).cxx_destruct;	// IMP=0x00000000000a3456
@property(readonly, retain, nonatomic) LPImage *image; // @synthesize image=_image;
- (id)initWithImage:(id)arg1 fetcher:(id)arg2;	// IMP=0x00000000000a33a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

