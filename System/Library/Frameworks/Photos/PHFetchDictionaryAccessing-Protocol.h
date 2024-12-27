//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/NSObject-Protocol.h>

@protocol NSCopying, PHMutableFetchDictionaryAccessing;

@protocol PHFetchDictionaryAccessing <NSObject>
- (id)objectForKeyedSubscript:(id <NSCopying>)arg1;
- (id)objectForKey:(id <NSCopying>)arg1;

@optional
- (id <PHMutableFetchDictionaryAccessing>)mutableAccessingCopy;
@end

