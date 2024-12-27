//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SHDataFetcherFileInfo : NSObject
{
    NSData *_data;	// 8 = 0x8
    NSURL *_dataFilePathURL;	// 16 = 0x10
    NSString *_suggestedFileName;	// 24 = 0x18
    NSDate *_creationDate;	// 32 = 0x20
    NSString *_storefront;	// 40 = 0x28
    NSString *_uniqueHash;	// 48 = 0x30
    NSString *_mimeType;	// 56 = 0x38
}

+ (id)dataFetcherForSourceURL:(id)arg1;	// IMP=0x006000000000d8d1
- (void).cxx_destruct;	// IMP=0x000000000000dcd0
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy, nonatomic) NSString *uniqueHash; // @synthesize uniqueHash=_uniqueHash;
@property(copy, nonatomic) NSString *storefront; // @synthesize storefront=_storefront;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy, nonatomic) NSString *suggestedFileName; // @synthesize suggestedFileName=_suggestedFileName;
@property(readonly, nonatomic) NSURL *dataFilePathURL; // @synthesize dataFilePathURL=_dataFilePathURL;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *suggestedExtension;
@property(readonly, nonatomic) int compressionType;
- (id)initWithDataURL:(id)arg1;	// IMP=0x000000000000da3c
- (id)initWithDataURL:(id)arg1 suggestedFileName:(id)arg2;	// IMP=0x000000000000d9a3
- (id)initWithData:(id)arg1 suggestedFileName:(id)arg2;	// IMP=0x000000000000d90a

@end

