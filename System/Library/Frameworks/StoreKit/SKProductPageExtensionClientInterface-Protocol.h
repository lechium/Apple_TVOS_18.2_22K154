//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKit/NSObject-Protocol.h>

@protocol SKProductPageExtensionClientInterface <NSObject>
- (void)userDidInteractWithProduct:(unsigned long long)arg1;
- (void)loadDidFinish;
- (void)finishWithResult:(unsigned long long)arg1 completion:(void (^)(void))arg2;
@end

