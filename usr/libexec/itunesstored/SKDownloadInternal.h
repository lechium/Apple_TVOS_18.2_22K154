//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, NSString, NSURL, SKPaymentTransaction;

@interface SKDownloadInternal : NSObject
{
    NSNumber *_downloadID;	// 8 = 0x8
    NSString *_productID;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    float _progress;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSURL *_contentURL;	// 48 = 0x30
    double _timeRemaining;	// 56 = 0x38
    NSNumber *_contentLength;	// 64 = 0x40
    NSString *_contentVersion;	// 72 = 0x48
    SKPaymentTransaction *_transaction;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000001224e

@end

