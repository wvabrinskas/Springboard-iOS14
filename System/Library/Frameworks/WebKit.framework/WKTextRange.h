/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UITextRange.h>

@class NSArray;

@interface WKTextRange : UITextRange {

	CGRect _startRect;
	CGRect _endRect;
	BOOL _isNone;
	BOOL _isRange;
	BOOL _isEditable;
	NSArray* _selectionRects;
	unsigned long long _selectedTextLength;

}

@property (assign,nonatomic) CGRect startRect;                                   //@synthesize startRect=_startRect - In the implementation block
@property (assign,nonatomic) CGRect endRect;                                     //@synthesize endRect=_endRect - In the implementation block
@property (assign,nonatomic) BOOL isNone;                                        //@synthesize isNone=_isNone - In the implementation block
@property (assign,nonatomic) BOOL isRange;                                       //@synthesize isRange=_isRange - In the implementation block
@property (assign,nonatomic) BOOL isEditable;                                    //@synthesize isEditable=_isEditable - In the implementation block
@property (assign,nonatomic) unsigned long long selectedTextLength;              //@synthesize selectedTextLength=_selectedTextLength - In the implementation block
@property (nonatomic,copy) NSArray * selectionRects;                             //@synthesize selectionRects=_selectionRects - In the implementation block
+(id)textRangeWithState:(BOOL)arg1 isRange:(BOOL)arg2 isEditable:(BOOL)arg3 startRect:(CGRect)arg4 endRect:(CGRect)arg5 selectionRects:(id)arg6 selectedTextLength:(unsigned long long)arg7 ;
-(BOOL)isEditable;
-(BOOL)_isCaret;
-(id)end;
-(BOOL)isNone;
-(void)setStartRect:(CGRect)arg1 ;
-(id)start;
-(void)setIsEditable:(BOOL)arg1 ;
-(CGRect)startRect;
-(void)setIsNone:(BOOL)arg1 ;
-(void)setSelectedTextLength:(unsigned long long)arg1 ;
-(BOOL)isEmpty;
-(NSArray *)selectionRects;
-(void)setSelectionRects:(NSArray *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)_isRanged;
-(void)setEndRect:(CGRect)arg1 ;
-(void)setIsRange:(BOOL)arg1 ;
-(BOOL)isRange;
-(CGRect)endRect;
-(void)dealloc;
-(unsigned long long)selectedTextLength;
@end

