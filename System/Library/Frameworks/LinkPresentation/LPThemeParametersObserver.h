//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface LPThemeParametersObserver : NSObject
{
    NSHashTable *_clients;	// 8 = 0x8
}

+ (id)shared;	// IMP=0x00600000000721a8
- (void).cxx_destruct;	// IMP=0x0000000000072589
- (void)didChangeThemeParameters;	// IMP=0x00000000000723b4
- (void)removeClient:(id)arg1;	// IMP=0x0000000000072364
- (void)addClient:(id)arg1;	// IMP=0x00000000000722a7
- (void)didChangeDarkenColorsStatus:(id)arg1;	// IMP=0x0000000000072295
- (void)dealloc;	// IMP=0x00000000000721e5
- (id)init;	// IMP=0x00000000000720d4

@end

