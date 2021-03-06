/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SiriCore/SiriCore-Structs.h>
@interface SiriCoreSQLiteStatement : NSObject {

	sqlite3_stmtRef _impl;
	BOOL _finalizeWhenDone;

}
-(void)reset;
-(sqlite3_stmtRef)impl;
-(id)initWithImpl:(sqlite3_stmtRef)arg1 finalizeWhenDone:(BOOL)arg2 ;
-(void)clearBindings;
-(void)dealloc;
@end

