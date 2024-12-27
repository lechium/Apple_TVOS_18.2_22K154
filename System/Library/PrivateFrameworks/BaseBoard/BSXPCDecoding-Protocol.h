//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/NSObject-Protocol.h>

@class NSDictionary, NSObject, NSString;
@protocol BSCollection, OS_xpc_object;

@protocol BSXPCDecoding <NSObject>
- (_Bool)containsValueForKey:(NSString *)arg1;
- (unsigned long long)decodeUInt64ForKey:(NSString *)arg1;
- (long long)decodeInt64ForKey:(NSString *)arg1;
- (_Bool)decodeBoolForKey:(NSString *)arg1;
- (double)decodeDoubleForKey:(NSString *)arg1;
- (struct CGRect)decodeCGRectForKey:(NSString *)arg1;
- (struct CGSize)decodeCGSizeForKey:(NSString *)arg1;
- (struct CGPoint)decodeCGPointForKey:(NSString *)arg1;
- (NSString *)decodeStringForKey:(NSString *)arg1;
- (NSObject<OS_xpc_object> *)decodeXPCObjectOfType:(struct _xpc_type_s *)arg1 forKey:(NSString *)arg2;
- (NSDictionary *)decodeDictionaryOfClass:(Class)arg1 forKey:(NSString *)arg2;
- (id <BSCollection>)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(NSString *)arg3;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(NSString *)arg2;
@end

