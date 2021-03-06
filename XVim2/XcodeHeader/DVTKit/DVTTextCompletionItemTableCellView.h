//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class DVTTextCompletionFormatContext, NSAttributedString, NSFont;

@interface DVTTextCompletionItemTableCellView : NSTableCellView
{
    double _previousHeight;
    NSFont *_previousFont;
    DVTTextCompletionFormatContext *_formatContext;
}

+ (id)keyPathsForValuesAffectingAttributedTitleString;
- (void).cxx_destruct;
@property(retain) DVTTextCompletionFormatContext *formatContext; // @synthesize formatContext=_formatContext;
- (id)accessibilityLabel;
@property(readonly, copy) NSAttributedString *attributedTitleString;
- (struct CGSize)frameSizeForRowHeight:(double)arg1;
- (double)textFieldAlignmentFramePositionForRowHeight:(double)arg1;
- (double)textFieldPositionForRowHeight:(double)arg1;
- (double)rowHeightForFont:(id)arg1;
- (double)textFieldHeightForFont:(id)arg1;
- (void)layout;
- (BOOL)isFlipped;
- (double)imageSizeForRowHeight:(double)arg1;
- (void)awakeFromNib;

@end

