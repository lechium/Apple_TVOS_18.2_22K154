//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSMutableData;

__attribute__((visibility("hidden")))
@interface ICSAPSessionVerifySignatureOperation
{
    NSData *_signatureData;	// 8 = 0x8
    NSMutableData *_data;	// 16 = 0x10
    CDUnknownBlockType _responseHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001bbf4d
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
- (void)finishWithSAPContextPreparationError:(id)arg1;	// IMP=0x00000000001bbe96
- (void)executeWithSAPContext:(id)arg1;	// IMP=0x00000000001bbdc5

@end

