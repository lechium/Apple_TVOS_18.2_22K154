//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface ICCloudContentTasteUpdateResponse : NSObject
{
    _Bool _cachedResponse;	// 8 = 0x8
    NSArray *_contentTasteItems;	// 16 = 0x10
    NSDate *_expirationDate;	// 24 = 0x18
    unsigned long long _responseRevisionID;	// 32 = 0x20
}

+ (id)eTagValueFromContentTasteResponse:(id)arg1;	// IMP=0x0040000000053f1a
- (void).cxx_destruct;	// IMP=0x0020000000053ef2
@property(nonatomic, getter=isCachedResponse) _Bool cachedResponse; // @synthesize cachedResponse=_cachedResponse;
@property(nonatomic) unsigned long long responseRevisionID; // @synthesize responseRevisionID=_responseRevisionID;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSArray *contentTasteItems; // @synthesize contentTasteItems=_contentTasteItems;
- (id)initWithContentTasteResponse:(id)arg1;	// IMP=0x0010000000053dfd

@end

