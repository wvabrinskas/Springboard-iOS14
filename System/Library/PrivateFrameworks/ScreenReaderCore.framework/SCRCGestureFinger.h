/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@interface SCRCGestureFinger : NSObject {

	unsigned long long _identifier;
	CGPoint _location;
	double _pressure;

}
-(double)pressure;
-(CGPoint)location;
-(unsigned long long)identifier;
-(id)description;
-(long long)type;
-(id)initWithIdentifier:(unsigned long long)arg1 location:(CGPoint)arg2 pressure:(double)arg3 ;
@end

