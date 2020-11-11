/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKTextProvider.h>

@class NSDateFormatter, NSMutableArray, NSDate, NSTimeZone;

@interface CLKTimeTextProvider : CLKTextProvider {

	NSDateFormatter* _dateFormatter;
	NSMutableArray* _sizingFallbackBlocks;
	BOOL _disallowBothMinutesAndDesignator;
	BOOL _prefersDesignatorToMinutes;
	NSDate* _date;
	NSTimeZone* _timeZone;

}

@property (assign,nonatomic) BOOL disallowBothMinutesAndDesignator;              //@synthesize disallowBothMinutesAndDesignator=_disallowBothMinutesAndDesignator - In the implementation block
@property (assign,nonatomic) BOOL prefersDesignatorToMinutes;                    //@synthesize prefersDesignatorToMinutes=_prefersDesignatorToMinutes - In the implementation block
@property (nonatomic,retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                              //@synthesize timeZone=_timeZone - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)textProviderWithDate:(id)arg1 ;
+(id)textProviderWithDate:(id)arg1 timeZone:(id)arg2 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(NSDate *)date;
-(BOOL)_validate;
-(id)initWithDate:(id)arg1 timeZone:(id)arg2 ;
-(id)description;
-(NSTimeZone *)timeZone;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisallowBothMinutesAndDesignator:(BOOL)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(void)setPrefersDesignatorToMinutes:(BOOL)arg1 ;
-(id)JSONObjectRepresentation;
-(id)_timeAttributedTextWithStyle:(id)arg1 dropMinutes:(BOOL)arg2 dropDesignator:(BOOL)arg3 ;
-(id)_initWithJSONObjectRepresentation:(id)arg1 ;
-(BOOL)disallowBothMinutesAndDesignator;
-(BOOL)prefersDesignatorToMinutes;
@end
