//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString, OS_dispatch_queue;

@protocol RPAuthenticatable
@property(copy, nonatomic) CDUnknownBlockType promptForPasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType hidePasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType showPasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType authCompletionHandler;
@property(readonly, nonatomic) int passwordTypeActual;
@property(nonatomic) int passwordType;
@property(copy, nonatomic) NSString *password;
@property(nonatomic) unsigned int pairVerifyFlags;
@property(nonatomic) unsigned int pairSetupFlags;
@property(retain, nonatomic) NSArray *pairSetupACL;
@property(copy, nonatomic) NSData *pairingInfo;
@property(readonly, nonatomic) OS_dispatch_queue *dispatchQueue;
@property(retain, nonatomic) NSArray *allowedMACAddresses;
- (void)tryPassword:(NSString *)arg1;

@optional
- (void)stopPairingServer;
- (void)startPairingServerWithCompletion:(void (^)(NSData *, NSError *))arg1;
@end

