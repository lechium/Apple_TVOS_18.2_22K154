//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSURLRequest;

@interface _TtC14ACSEFoundation16BAARequestSigner : NSObject
{
    MISSING_TYPE *date;	// 0 = 0x0
    MISSING_TYPE *baaCertificateFetcher;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000008440
- (id)init;	// IMP=0x00000000000083e0
- (void)signWithRequest:(NSURLRequest *)arg1 completionHandler:(void (^)(NSURLRequest *, NSError *))arg2;	// IMP=0x00000000000080f0
- (id)initWithDate:(id)arg1;	// IMP=0x0000000000007e40
@property(nonatomic, readonly) NSDate *date;

@end

