//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICPlaybackPositionEntity, NSData, NSString;

@interface ICDPlaybackPositionResponseDataPull
{
    NSData *_itemValueData;	// 8 = 0x8
    NSString *_itemKey;	// 16 = 0x10
    NSString *_itemVersion;	// 24 = 0x18
    NSString *_domainVersion;	// 32 = 0x20
    ICPlaybackPositionEntity *_cloudEntity;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000542e4
@property(readonly, nonatomic) ICPlaybackPositionEntity *cloudEntity; // @synthesize cloudEntity=_cloudEntity;
@property(readonly, nonatomic) NSString *domainVersion; // @synthesize domainVersion=_domainVersion;
@property(readonly, nonatomic) NSString *itemVersion; // @synthesize itemVersion=_itemVersion;
@property(readonly, nonatomic) NSString *itemKey; // @synthesize itemKey=_itemKey;
- (id)description;	// IMP=0x001000000005424a
- (id)initWithResponseDictionary:(id)arg1 forDomain:(id)arg2;	// IMP=0x001000000005402e

@end

