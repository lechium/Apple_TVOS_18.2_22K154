//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/NSObject-Protocol.h>

@class NSArray, NSKeyedUnarchiver, NSString;

@protocol NSKeyedUnarchiverDelegate <NSObject>

@optional
- (void)unarchiverDidFinish:(NSKeyedUnarchiver *)arg1;
- (void)unarchiverWillFinish:(NSKeyedUnarchiver *)arg1;
- (void)unarchiver:(NSKeyedUnarchiver *)arg1 willReplaceObject:(id)arg2 withObject:(id)arg3;
- (id)unarchiver:(NSKeyedUnarchiver *)arg1 didDecodeObject:(id)arg2;
- (Class)unarchiver:(NSKeyedUnarchiver *)arg1 cannotDecodeObjectOfClassName:(NSString *)arg2 originalClasses:(NSArray *)arg3;
@end

