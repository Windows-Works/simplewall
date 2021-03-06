// simplewall
// Copyright (c) 2016-2019 Henry++

#pragma once

void _app_notifycreatewindow ();
bool _app_notifycommand (HWND hwnd, INT button_id, time_t seconds);

bool _app_notifyadd (HWND hwnd, PR_OBJECT ptr_log_object, PITEM_APP ptr_app);
void _app_freenotify (PITEM_APP ptr_app, bool is_refresh);
void _app_freenotify (size_t app_hash, bool is_refresh);

size_t _app_notifyget_id (HWND hwnd, size_t current_id);
PR_OBJECT _app_notifyget_obj (size_t app_hash);

bool _app_notifyshow (HWND hwnd, PR_OBJECT ptr_log_object, bool is_forced, bool is_safety);
void _app_notifyhide (HWND hwnd);

void _app_notifyplaysound ();

void _app_notifyrefresh (HWND hwnd, bool is_safety);

void _app_notifysetpos (HWND hwnd, bool is_forced);
void _app_notifysettext (HDC hdc, HWND hwnd, INT ctrl_id1, LPCWSTR text1, INT ctrl_id2, LPCWSTR text2);

HFONT _app_notifyinitfont (PLOGFONT plf, LONG height, LONG weight, LPCWSTR name, BYTE is_underline);

LRESULT CALLBACK NotificationProc (HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam);
