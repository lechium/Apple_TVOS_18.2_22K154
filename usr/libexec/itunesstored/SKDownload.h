//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, NSString, NSURL, SKPaymentTransaction;

@interface SKDownload : NSObject
{
    id _internal;	// 8 = 0x8
}

+ (void)deleteContentForProductID:(id)arg1;	// IMP=0x00400000000128d9
+ (id)contentURLForProductID:(id)arg1;	// IMP=0x00100000000128d1
- (void).cxx_destruct;	// IMP=0x0020000000012c71
- (id)copyXPCEncoding;	// IMP=0x0010000000012b65
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00100000000128df
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001278f
- (void)_setVersion:(id)arg1;	// IMP=0x001000000001275e
- (void)_setTransaction:(id)arg1;	// IMP=0x00100000000126be
- (void)_setTimeRemaining:(double)arg1;	// IMP=0x00100000000126af
- (void)_setProgress:(float)arg1;	// IMP=0x00100000000126a0
- (void)_setError:(id)arg1;	// IMP=0x001000000001266f
- (void)_setDownloadState:(long long)arg1;	// IMP=0x0010000000012661
- (void)_setContentURL:(id)arg1;	// IMP=0x0010000000012630
- (void)_setContentLength:(id)arg1;	// IMP=0x00100000000125ff
- (void)_setContentIdentifier:(id)arg1;	// IMP=0x00100000000125ce
@property(copy, nonatomic, getter=_downloadID, setter=_setDownloadID:) NSNumber *_downloadID;
- (void)_applyChangeset:(id)arg1;	// IMP=0x00100000000123da
@property(readonly, nonatomic) SKPaymentTransaction *transaction;
@property(readonly, nonatomic) double timeRemaining;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSString *contentVersion;
@property(readonly, nonatomic) long long contentLength;
@property(readonly, nonatomic) float progress;
@property(readonly, nonatomic) NSURL *contentURL;
@property(readonly, nonatomic) long long downloadState;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) NSString *contentIdentifier;
- (id)init;	// IMP=0x00100000000122ab

@end

