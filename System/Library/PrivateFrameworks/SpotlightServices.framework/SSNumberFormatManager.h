/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumberFormatter, NSByteCountFormatter;

@interface SSNumberFormatManager : NSObject {

	NSNumberFormatter* _numberFormatter;
	NSByteCountFormatter* _byteCountFormatter;

}

@property (retain) NSNumberFormatter * numberFormatter;                    //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (retain) NSByteCountFormatter * byteCountFormatter;              //@synthesize byteCountFormatter=_byteCountFormatter - In the implementation block
+(void)initialize;
+(id)stringFromByteCount:(long long)arg1 ;
+(id)stringFromInt:(int)arg1 withMinimumDigits:(unsigned long long)arg2 ;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(id)init;
-(void)setByteCountFormatter:(NSByteCountFormatter *)arg1 ;
-(NSByteCountFormatter *)byteCountFormatter;
@end

