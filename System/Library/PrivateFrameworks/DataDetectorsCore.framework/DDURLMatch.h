/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@class NSString;

@interface DDURLMatch : NSObject {

	NSRange _range;
	NSString* _url;

}
-(NSRange)range;
-(id)url;
-(long long)compare:(id)arg1 ;
-(id)initWithRange:(NSRange)arg1 url:(id)arg2 ;
-(id)description;
-(void)dealloc;
@end
