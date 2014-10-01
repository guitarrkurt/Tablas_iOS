//
//  ViewController.h
//  ClaseTableView
//
//  Created by Mac30 on 01/10/14.
//  Copyright (c) 2014 Mac16. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController :  UIViewController <UITableViewDelegate, UITableViewDataSource>

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath;

@end
