/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputUI/TextInputUI-Structs.h>
#import <TextInputUI/TUICandidateBaseCell.h>

@class TIKeyboardCandidate, TUICandidateLabel, UILabel;

@interface TUICandidateCell : TUICandidateBaseCell {

	BOOL _shouldShowCandidateNumber;
	BOOL _rowSelected;
	TIKeyboardCandidate* _candidate;
	unsigned long long _candidateNumber;
	long long _alignment;
	double _minimumTextLabelHeight;
	TUICandidateLabel* _textLabel;
	TUICandidateLabel* _alternativeTextLabel;
	UILabel* _candidateNumberLabel;
	TUICandidateLabel* _annotationTextLabel;

}

@property (nonatomic,retain) TUICandidateLabel * textLabel;                         //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) TUICandidateLabel * alternativeTextLabel;              //@synthesize alternativeTextLabel=_alternativeTextLabel - In the implementation block
@property (nonatomic,retain) UILabel * candidateNumberLabel;                        //@synthesize candidateNumberLabel=_candidateNumberLabel - In the implementation block
@property (nonatomic,retain) TUICandidateLabel * annotationTextLabel;               //@synthesize annotationTextLabel=_annotationTextLabel - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * candidate;                       //@synthesize candidate=_candidate - In the implementation block
@property (assign,nonatomic) unsigned long long candidateNumber;                    //@synthesize candidateNumber=_candidateNumber - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCandidateNumber;                        //@synthesize shouldShowCandidateNumber=_shouldShowCandidateNumber - In the implementation block
@property (assign,nonatomic) BOOL rowSelected;                                      //@synthesize rowSelected=_rowSelected - In the implementation block
@property (assign,nonatomic) long long alignment;                                   //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) double minimumTextLabelHeight;                         //@synthesize minimumTextLabelHeight=_minimumTextLabelHeight - In the implementation block
+(id)reuseIdentifier;
+(double)widthForText:(id)arg1 font:(id)arg2 layoutOrientation:(long long)arg3 ;
+(double)widthForCandidate:(id)arg1 showCandidateNumber:(BOOL)arg2 style:(id)arg3 ;
-(BOOL)isFocused;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)commonInit;
-(TIKeyboardCandidate *)candidate;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(id)cellBackgroundColor;
-(void)layoutSubviews;
-(id)cellBackgroundImage;
-(long long)alignment;
-(TUICandidateLabel *)textLabel;
-(id)initWithCoder:(id)arg1 ;
-(void)setTextLabel:(TUICandidateLabel *)arg1 ;
-(BOOL)_canFocusProgrammatically;
-(void)prepareForReuse;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)updateColors;
-(void)updateLabels;
-(void)updateStyle;
-(BOOL)rowSelected;
-(TUICandidateLabel *)alternativeTextLabel;
-(UILabel *)candidateNumberLabel;
-(TUICandidateLabel *)annotationTextLabel;
-(void)setCandidateNumber:(unsigned long long)arg1 ;
-(void)setRowSelected:(BOOL)arg1 ;
-(void)setShouldShowCandidateNumber:(BOOL)arg1 ;
-(void)rotateBy90DegreesForFrame:(CGRect*)arg1 ;
-(unsigned long long)candidateNumber;
-(BOOL)shouldShowCandidateNumber;
-(double)minimumTextLabelHeight;
-(void)setMinimumTextLabelHeight:(double)arg1 ;
-(void)setAlternativeTextLabel:(TUICandidateLabel *)arg1 ;
-(void)setCandidateNumberLabel:(UILabel *)arg1 ;
-(void)setAnnotationTextLabel:(TUICandidateLabel *)arg1 ;
-(void)setStyle:(id)arg1 ;
@end

