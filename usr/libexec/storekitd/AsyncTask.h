//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AsyncTask
{
    _Bool _executing;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
}

- (_Bool)isFinished;	// IMP=0x00200000000831bc
- (_Bool)isExecuting;	// IMP=0x00100000000831aa
- (void)completeWithSuccess;	// IMP=0x001000000008314d
- (void)completeWithError:(id)arg1;	// IMP=0x00100000000830f0
- (void)start;	// IMP=0x00100000000830bd
- (void)setFinished:(_Bool)arg1;	// IMP=0x001000000008304e
- (void)setExecuting:(_Bool)arg1;	// IMP=0x0010000000082fdf
- (_Bool)isAsynchronous;	// IMP=0x0010000000082fd7

@end

