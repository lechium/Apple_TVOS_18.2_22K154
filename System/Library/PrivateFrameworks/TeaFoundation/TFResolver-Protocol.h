//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TeaFoundation/NSObject-Protocol.h>

@class NSString, Protocol;

@protocol TFResolver <NSObject>
- (id)resolveOptionalProtocol:(Protocol *)arg1 name:(NSString *)arg2 contextBlock:(void (^)(id <TFContext>))arg3;
- (id)resolveOptionalProtocol:(Protocol *)arg1 name:(NSString *)arg2;
- (id)resolveOptionalProtocol:(Protocol *)arg1 contextBlock:(void (^)(id <TFContext>))arg2;
- (id)resolveOptionalProtocol:(Protocol *)arg1;
- (id)resolveProtocol:(Protocol *)arg1 name:(NSString *)arg2 contextBlock:(void (^)(id <TFContext>))arg3;
- (id)resolveProtocol:(Protocol *)arg1 name:(NSString *)arg2;
- (id)resolveProtocol:(Protocol *)arg1 contextBlock:(void (^)(id <TFContext>))arg2;
- (id)resolveProtocol:(Protocol *)arg1;
- (id)resolveOptionalClass:(Class)arg1 name:(NSString *)arg2 contextBlock:(void (^)(id <TFContext>))arg3;
- (id)resolveOptionalClass:(Class)arg1 name:(NSString *)arg2;
- (id)resolveOptionalClass:(Class)arg1 contextBlock:(void (^)(id <TFContext>))arg2;
- (id)resolveOptionalClass:(Class)arg1;
- (id)resolveClass:(Class)arg1 name:(NSString *)arg2 contextBlock:(void (^)(id <TFContext>))arg3;
- (id)resolveClass:(Class)arg1 name:(NSString *)arg2;
- (id)resolveClass:(Class)arg1 contextBlock:(void (^)(id <TFContext>))arg2;
- (id)resolveClass:(Class)arg1;
@end

