//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTDelayedInvocationScheduler.h>

@interface DVTDelayedInvocationDelayScheduler : DVTDelayedInvocationScheduler
{
    double _delay;
}

+ (id)schedulerWithDelay:(double)arg1;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
- (void)unscheduleDelayedInvocation:(id)arg1;
- (void)scheduleDelayedInvocation:(id)arg1;
- (id)initWithDelay:(double)arg1;

@end

